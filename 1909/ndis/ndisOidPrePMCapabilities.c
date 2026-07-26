/*
 * XREFs of ndisOidPrePMCapabilities @ 0x1C0074334
 * Callers:
 *     ndisOidPrePMCurrentCapabilities @ 0x1C0074510 (ndisOidPrePMCurrentCapabilities.c)
 *     ndisOidPrePMHardwareCapabilities @ 0x1C00745B0 (ndisOidPrePMHardwareCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 */

unsigned __int8 __fastcall ndisOidPrePMCapabilities(__int64 *a1, char a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  unsigned __int8 v6; // si
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  int v10; // eax
  int v11; // edx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax

  v2 = *a1;
  v4 = a1[4];
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      46,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v2,
      v4);
  v7 = a1[3];
  if ( v7 && (v8 = *(_QWORD *)(v7 + 24), v9 = *(_BYTE *)(v8 + 56), v9 <= 6u) && (v9 != 6 || *(_BYTE *)(v8 + 57) < 0x14u)
    || (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) != 0 )
  {
    LOBYTE(v10) = -69;
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    v11 = 52;
    *((_DWORD *)a1 + 10) = 0;
    v10 = 0;
    if ( *(_DWORD *)(v4 + 48) < 0x34u )
    {
      v10 = -1073676268;
      *(_DWORD *)(v4 + 56) = 52;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( !v10 )
    {
      if ( *a1 )
      {
        v12 = *(_QWORD *)(v4 + 40);
        if ( *(_DWORD *)(v4 + 48) >= 0x3Cu )
        {
          v11 = 60;
          v14 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFC4uLL;
          *(_OWORD *)v12 = *(_OWORD *)(v14 + v2 + 1060);
          *(_OWORD *)(v12 + 16) = *(_OWORD *)(v14 + v2 + 1076);
          *(_OWORD *)(v12 + 32) = *(_OWORD *)(v14 + v2 + 1092);
          *(_QWORD *)(v12 + 48) = *(_QWORD *)(v14 + v2 + 1108);
          *(_DWORD *)(v12 + 56) = *(_DWORD *)(v14 + v2 + 1116);
        }
        else
        {
          v13 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFC4uLL;
          *(_OWORD *)v12 = *(_OWORD *)(v13 + v2 + 1060);
          *(_OWORD *)(v12 + 16) = *(_OWORD *)(v13 + v2 + 1076);
          *(_OWORD *)(v12 + 32) = *(_OWORD *)(v13 + v2 + 1092);
          *(_DWORD *)(v12 + 48) = *(_DWORD *)(v13 + v2 + 1108);
          *(_WORD *)(v12 + 2) = 52;
          *(_BYTE *)(v12 + 1) = 1;
        }
        *(_DWORD *)(v4 + 52) = v11;
        *(_DWORD *)(v4 + 56) = 0;
        *((_DWORD *)a1 + 10) = 0;
      }
      else
      {
        v6 = 0;
      }
      LOBYTE(v10) = 0;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Fu,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v2,
      v10,
      v6);
  return v6;
}
