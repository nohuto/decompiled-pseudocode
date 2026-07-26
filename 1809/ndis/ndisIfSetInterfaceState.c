/*
 * XREFs of ndisIfSetInterfaceState @ 0x1C0019BD4
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001589C (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisUpdateOperationalStatus @ 0x1C0017108 (ndisUpdateOperationalStatus.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ndisMSetGeneralAttributes @ 0x1C001DD54 (ndisMSetGeneralAttributes.c)
 *     ndisPnPPortActivation @ 0x1C003DA98 (ndisPnPPortActivation.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C0047C60 (ndisOidPreSetPortAuthentication.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisIsDefaultPortStateOperational @ 0x1C0016DC4 (ndisIsDefaultPortStateOperational.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C0017000 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019E34 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019EC8 (ndisMReferenceIfBlock.c)
 */

char __fastcall ndisIfSetInterfaceState(__int64 a1, __int64 a2, KIRQL a3)
{
  int v3; // ebx
  char v4; // bp
  char v5; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // ecx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r12
  int v13; // r15d
  int v14; // r9d
  KIRQL v15; // cl

  v3 = *(_DWORD *)(a1 + 4100);
  v4 = 0;
  *(_DWORD *)(a1 + 4100) = 0;
  v5 = a2;
  if ( *(_DWORD *)(a1 + 2264) == 1 )
    goto LABEL_4;
  if ( *(_DWORD *)(a1 + 480) != 1 )
  {
    *(_DWORD *)(a1 + 4100) = 2;
LABEL_4:
    *(_DWORD *)(a1 + 4096) = 2;
    goto LABEL_5;
  }
  if ( ndisIsDefaultPortStateOperational((_DWORD *)a1) )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 2264) - 5) <= 1 )
    {
      *(_DWORD *)(a1 + 4100) |= 4u;
      *(_DWORD *)(a1 + 4096) = 5;
    }
    else
    {
      *(_QWORD *)(a1 + 4096) = 1LL;
      if ( (v3 & 8) != 0 )
        *(_DWORD *)(a1 + 4100) = 0x1000000;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4100) |= 1u;
    *(_DWORD *)(a1 + 4096) = 2;
  }
LABEL_5:
  LOBYTE(a2) = 10;
  v7 = ndisMReferenceIfBlock(a1, a2);
  v8 = v7;
  if ( v7 )
  {
    v9 = *(_DWORD *)(a1 + 4096);
    v10 = v7 + 1112;
    v11 = *(unsigned int *)(v7 + 1112);
    v12 = v7 + 1220;
    v13 = *(_DWORD *)(v7 + 1220);
    *(_DWORD *)(v7 + 1112) = v9;
    *(_DWORD *)(v7 + 1192) = *(_DWORD *)(a1 + 4092);
    v14 = *(_DWORD *)(a1 + 480);
    *(_DWORD *)(v7 + 1220) = v14;
    *(_DWORD *)(v7 + 1224) = *(_DWORD *)(a1 + 488);
    *(_QWORD *)(v7 + 1208) = *(_QWORD *)(a1 + 800);
    *(_QWORD *)(v7 + 1200) = *(_QWORD *)(a1 + 792);
    *(_DWORD *)(v7 + 1116) = *(_DWORD *)(a1 + 4100);
    if ( (_DWORD)v11 == v9 || (v4 = 1, !v5) )
    {
      v15 = a3;
    }
    else
    {
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), a3);
      ndisNsiScheduleIfBlockRodChangeNotification(v8, v10, 8, 536);
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 1864) = 2244139;
      v14 = *(_DWORD *)(v8 + 1220);
    }
    if ( v13 != v14 && v5 )
    {
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v15);
      ndisNsiScheduleIfBlockRodChangeNotification(v8, v12, 4, 644);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 1864) = 2244152;
    }
    LOBYTE(v11) = 10;
    ndisMDereferenceIfBlock(a1, v11);
  }
  return v4;
}
