/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1C011A4F0
 * Callers:
 *     RIMCreateHidDesc @ 0x1C004F0B8 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004F608 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_S @ 0x1C005098C (WPP_RECORDER_SF_S.c)
 *     RIMFreeHidDesc @ 0x1C0052898 (RIMFreeHidDesc.c)
 *     RIMDeliverConfigRequest @ 0x1C011A884 (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C011ADBC (RIMFindInputDeviceForConfig.c)
 *     RIMGetDeviceParent @ 0x1C011B0FC (RIMGetDeviceParent.c)
 */

char *__fastcall RIMAllocateHidConfigDesc(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, __int64 a5)
{
  char *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int16 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h] BYREF
  int v22; // [rsp+80h] [rbp+18h] BYREF

  if ( !a3 )
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x26u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
    return 0LL;
  }
  if ( !a4[4] )
  {
    WPP_RECORDER_SF_DD(a4[1], a2, 0x14u, 0x27u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, a4[1], *a4);
    return 0LL;
  }
  v10 = (char *)Win32AllocPoolZInit(0x78uLL, 0x44687352u);
  if ( !v10 )
  {
    WPP_RECORDER_SF_S(
      gRimLog,
      3u,
      0x14u,
      0x28u,
      (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
      *(const struct _MCGEN_TRACE_CONTEXT **)(a2 + 216));
    return 0LL;
  }
  v11 = Win32AllocPoolNonPaged(a4[4], 0x70707352u);
  *((_QWORD *)v10 + 4) = v11;
  if ( !v11 )
  {
    v13 = a4[4];
    v14 = 41;
LABEL_10:
    LODWORD(v19) = v13;
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, v14, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v19);
    RIMFreeHidDesc((__int64)v10, v15, v16);
    return 0LL;
  }
  v17 = a5;
  *(_OWORD *)(v10 + 40) = *(_OWORD *)a4;
  v22 = 0;
  *(_OWORD *)(v10 + 56) = *((_OWORD *)a4 + 1);
  v20 = 0;
  *(_OWORD *)(v10 + 72) = *((_OWORD *)a4 + 2);
  v21 = 0LL;
  *(_OWORD *)(v10 + 88) = *((_OWORD *)a4 + 3);
  *((_QWORD *)v10 + 2) = a3;
  *((_QWORD *)v10 + 13) = *(_QWORD *)v17;
  *((_DWORD *)v10 + 28) = *(_DWORD *)(v17 + 8);
  if ( !(unsigned int)RIMGetDeviceParent(v12, a2) )
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x2Au, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
  if ( (unsigned int)RIMFindInputDeviceForConfig((_DWORD)v10, a1, a2, (unsigned int)&v22, (__int64)&v20, (__int64)&v21)
    && v22 )
  {
    v13 = *(_DWORD *)(a1 + 84);
    if ( v20 )
    {
      if ( (v13 & 0x10) == 0 )
      {
        v14 = 43;
        goto LABEL_10;
      }
      *(_DWORD *)(a2 + 184) |= 0x800u;
    }
    else
    {
      if ( (v13 & 8) == 0 )
      {
        v14 = 44;
        goto LABEL_10;
      }
      *(_DWORD *)(a2 + 184) |= 0x1000u;
    }
    v18 = RIMDeliverConfigRequest((struct RIMDEV *)a2);
    if ( v18 < 0 )
    {
      LODWORD(v19) = v18;
      WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, 0x2Du, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v19);
    }
  }
  *(_BYTE *)(a2 + 48) = 3;
  return v10;
}
