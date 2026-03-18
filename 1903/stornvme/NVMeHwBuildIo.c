/*
 * XREFs of NVMeHwBuildIo @ 0x1C0002F70
 * Callers:
 *     <none>
 * Callees:
 *     IoctlToNVMe @ 0x1C00018EC (IoctlToNVMe.c)
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     ScsiToNVMe @ 0x1C0003070 (ScsiToNVMe.c)
 *     GetNamespaceId @ 0x1C0003844 (GetNamespaceId.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     ProtocolCommandToNVMe @ 0x1C00124BC (ProtocolCommandToNVMe.c)
 *     NVMeSetSenseData @ 0x1C00189CC (NVMeSetSenseData.c)
 */

char __fastcall NVMeHwBuildIo(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  bool v10; // zf
  char v11; // bl
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // eax
  char v18; // cl
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  memset((void *)(v4 + 4096), 0, 0xA0uLL);
  v7 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v7 == 40 )
    v8 = *(_DWORD *)(a2 + 20);
  else
    v8 = (unsigned __int8)v7;
  if ( v8 )
  {
    v5 = 0x1C0000000uLL;
    switch ( v8 )
    {
      case 2:
        if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
          goto LABEL_20;
        IoctlToNVMe(a1, a2);
        break;
      case 8:
        *(_BYTE *)(a2 + 3) = 1;
        break;
      case 9:
        if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
          goto LABEL_20;
        ProtocolCommandToNVMe(a1, a2);
        break;
      case 36:
        if ( (_BYTE)v7 == 40 )
          v10 = *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) == 1;
        else
          v10 = *(_BYTE *)(a2 + 4) == 1;
        v11 = 1;
        if ( !v10 )
          v11 = 6;
        *(_BYTE *)(a2 + 3) = v11;
        break;
      case 38:
        if ( (_BYTE)v7 == 40 )
        {
          v12 = *(_QWORD *)(a2 + 64);
          v13 = 60LL;
        }
        else
        {
          v12 = *(_QWORD *)(a2 + 24);
          v13 = 16LL;
        }
        if ( !v12 || *(_DWORD *)(a2 + v13) < 0x48u || (*(_DWORD *)(a1 + 52) & 0x10) == 0 )
          goto LABEL_36;
        goto LABEL_34;
      case 39:
        if ( (_BYTE)v7 == 40 )
        {
          v14 = *(_QWORD *)(a2 + 64);
          v15 = 60LL;
        }
        else
        {
          v14 = *(_QWORD *)(a2 + 24);
          v15 = 16LL;
        }
        if ( !v14 || *(_DWORD *)(a2 + v15) < 0x48u )
          goto LABEL_46;
        v16 = *(_QWORD *)(v14 + 64);
        goto LABEL_43;
      case 42:
        if ( (_BYTE)v7 == 40 )
        {
          v19 = *(_QWORD *)(a2 + 64);
          v20 = 60LL;
        }
        else
        {
          v19 = *(_QWORD *)(a2 + 24);
          v20 = 16LL;
        }
        if ( v19 && *(_DWORD *)(a2 + v20) >= 0x20u && *(_DWORD *)(v19 + 8) == 1196246089 )
        {
LABEL_34:
          StorPortExtendedFunction(0LL, a1, 128LL);
          *(_BYTE *)(a2 + 3) = 4;
        }
        else
        {
LABEL_36:
          *(_BYTE *)(a2 + 3) = 6;
        }
        break;
      case 43:
        if ( (_BYTE)v7 == 40 )
        {
          v21 = *(_QWORD *)(a2 + 64);
          v22 = 60LL;
        }
        else
        {
          v21 = *(_QWORD *)(a2 + 24);
          v22 = 16LL;
        }
        if ( v21 && *(_DWORD *)(a2 + v22) >= 0x18u && *(_DWORD *)(v21 + 8) == 1179468873 )
        {
          v16 = *(_QWORD *)(v21 + 16);
LABEL_43:
          v17 = StorPortExtendedFunction(1LL, a1, v16);
          v18 = 4;
          if ( !v17 )
            v18 = 1;
        }
        else
        {
LABEL_46:
          v18 = 6;
        }
        *(_BYTE *)(a2 + 3) = v18;
        break;
      default:
        break;
    }
  }
  else if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
  {
    ScsiToNVMe(a1, a2);
  }
  else
  {
LABEL_20:
    LOBYTE(v6) = 32;
    LOBYTE(v7) = 8;
    NVMeSetSenseData(a2, v7, v5, v6);
  }
  if ( !*(_BYTE *)(a2 + 3) )
    return 1;
  StorPortNotification(0LL, a1, a2);
  return 0;
}
