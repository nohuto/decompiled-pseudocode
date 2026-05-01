/*
 * XREFs of Pdcv2ActivationClientActivate @ 0x1800396CC
 * Callers:
 *     ?HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE@@PEBGKPEAPEAXPEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x1800394F8 (-HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180039998 (RtlStringCchCopyW.c)
 *     PdcCancelWatchdogAroundClientCall @ 0x180039BA4 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180039BC8 (PdcReleaseRwLockExclusive2.c)
 *     PdcPortSendMessageSynchronously @ 0x180039EA0 (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180039F4C (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x180039FC0 (PdcCreateWatchdogAroundClientCall.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE @ 0x18003A008 (Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE.c)
 *     Pdcv2pValidateActivationParameters @ 0x18003A0F8 (Pdcv2pValidateActivationParameters.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     PdcpResizeDiagnosticContext @ 0x180071524 (PdcpResizeDiagnosticContext.c)
 */

__int64 __fastcall Pdcv2ActivationClientActivate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // r15
  __int64 v9; // r14
  _QWORD *Heap; // rax
  _QWORD *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // ebx
  int v18; // eax
  _QWORD *v19; // rcx
  _QWORD *v21; // rax
  __int128 *v22; // rax
  _BYTE v23[8]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE pv[40]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v25[40]; // [rsp+58h] [rbp-B0h] BYREF
  int v26; // [rsp+80h] [rbp-88h]
  int v27; // [rsp+90h] [rbp-78h]
  int v28; // [rsp+94h] [rbp-74h]
  __int64 v29; // [rsp+98h] [rbp-70h]
  int v30; // [rsp+A0h] [rbp-68h]
  __int64 v31; // [rsp+A8h] [rbp-60h]
  int v32; // [rsp+B0h] [rbp-58h]
  int v33; // [rsp+B4h] [rbp-54h]
  _BYTE v34[256]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v35[256]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v36; // [rsp+2B8h] [rbp+1B0h]
  __int64 v37; // [rsp+2C8h] [rbp+1C0h]
  _BYTE v38[168]; // [rsp+2D0h] [rbp+1C8h] BYREF

  v8 = 0LL;
  v9 = (int)a4;
  v23[0] = 0;
  if ( !a8 )
  {
    v17 = -1073741578;
    goto LABEL_23;
  }
  *a8 = 1;
  if ( !a7 )
  {
    v17 = -1073741579;
    goto LABEL_23;
  }
  *a7 = 0LL;
  if ( !a1 )
    goto LABEL_31;
  v8 = a1;
  if ( *(_DWORD *)a1 != 843138128 )
  {
    v8 = 0LL;
LABEL_31:
    v17 = -1073741585;
    goto LABEL_23;
  }
  if ( a4 > 4 )
  {
    v17 = -1073741582;
  }
  else if ( (unsigned __int8)Pdcv2pValidateActivationParameters(a2)
         && a2
         && (*(_DWORD *)a2 == 1
          || *(_DWORD *)a2 == 2
          && ((v21 = *(_QWORD **)(a2 + 32)) == 0LL || *v21 < 2uLL)
          && ((_DWORD)v9 != 4 || v21 && (*(_BYTE *)v21 & 1) != 0 && v21[1] && !v21[2])) )
  {
    if ( a5 )
    {
      PdcCreateWatchdogAroundClientCall(pv);
      PdcAcquireRwLockExclusive2(a1 + 8, v23);
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x258uLL);
      v13 = Heap;
      if ( Heap )
      {
        memset_0(Heap, 0, 0x258uLL);
        *((_DWORD *)v13 + 4) = 1094927440;
        *((_DWORD *)v13 + 5) = 1;
        v13[3] = a1;
        v13[5] = GetTickCount64();
        v13[4] = a3;
        *((_DWORD *)v13 + 13) = *(_DWORD *)(a2 + 4);
        *((_DWORD *)v13 + 12) = v9;
        RtlStringCchCopyW(v13 + 9, 128LL, a5);
        v14 = *(_QWORD *)(a2 + 16);
        if ( v14 )
          RtlStringCchCopyW(v13 + 41, 128LL, v14);
        memset_0(v25, 0, 0x320uLL);
        v31 = *(_QWORD *)(a2 + 8);
        v32 = a6;
        v33 = *(_DWORD *)(a2 + 4);
        v26 = 10;
        v30 = v9;
        RtlStringCchCopyW(v34, 128LL, a5);
        v15 = *(_QWORD *)(a2 + 16);
        if ( v15 )
          RtlStringCchCopyW(v35, 128LL, v15);
        v16 = *(_QWORD *)(a2 + 24);
        if ( v16 )
          PdcpResizeDiagnosticContext(v16, v38);
        if ( *(_DWORD *)a2 >= 2u && (_DWORD)v9 == 4 )
        {
          v22 = *(__int128 **)(a2 + 32);
          v36 = *v22;
          v37 = *((_QWORD *)v22 + 2);
        }
        v17 = PdcPortSendMessageSynchronously(*(_QWORD *)(a1 + 32), v25);
        if ( v17 < 0 || (v17 = v27, v18 = v28, *a8 = v28, v17 < 0) || v18 == 300 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
        }
        else
        {
          v13[74] = v29;
          *((_BYTE *)v13 + 60) = 0;
          *((_DWORD *)v13 + 14) = v28;
          ++*(_DWORD *)(a1 + 220);
          ++*(_DWORD *)(a1 + 224);
          ++*(_DWORD *)(a1 + 4 * v9 + 228);
          v19 = *(_QWORD **)(a1 + 80);
          if ( *v19 != a1 + 72 )
            __fastfail(3u);
          *v13 = a1 + 72;
          v13[1] = v19;
          *v19 = v13;
          *(_QWORD *)(a1 + 80) = v13;
          *a7 = v13;
          Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(v13, a1, (unsigned int)v17);
        }
      }
      else
      {
        v17 = -1073741801;
      }
    }
    else
    {
      v17 = -1073741581;
    }
  }
  else
  {
    v17 = -1073741584;
  }
LABEL_23:
  if ( v17 < 0 )
    Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(0LL, v8, (unsigned int)v17);
  if ( v23[0] )
    PdcReleaseRwLockExclusive2(v8 + 8, v23);
  PdcCancelWatchdogAroundClientCall(pv);
  return (unsigned int)v17;
}
