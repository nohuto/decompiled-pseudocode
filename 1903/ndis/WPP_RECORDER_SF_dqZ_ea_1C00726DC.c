/*
 * XREFs of WPP_RECORDER_SF_dqZ @ 0x1C00726DC
 * Callers:
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C0073534 (ndisMUpdateNameOnPMWakePacket.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rbx
  __int64 v11; // rdx
  const wchar_t *v12; // rcx
  const wchar_t *v13; // rax
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-68h]

  v8 = L"NULL";
  v9 = a8;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
  {
    if ( a8 )
      v11 = *a8;
    else
      v11 = 8LL;
    if ( a8 && *a8 )
      v12 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v12 = L"NULL";
    v13 = a8;
    if ( !a8 )
      v13 = L"\b";
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      0x80u,
      &a6,
      4LL,
      &a7,
      8LL,
      v13,
      2LL,
      v12,
      v11,
      0LL);
  }
  v14 = v9 == 0LL;
  if ( v9 )
  {
    if ( *v9 )
      v8 = (const wchar_t *)*((_QWORD *)v9 + 1);
    v14 = v9 == 0LL;
  }
  if ( v14 )
    v9 = L"\b";
  LOWORD(v16) = 128;
  return WppAutoLogTrace(
           a1,
           3LL,
           14LL,
           &WPP_091de2f669683db8988ab996bc16e527_Traceguids,
           v16,
           &a6,
           4LL,
           &a7,
           8LL,
           v9,
           2LL,
           v8);
}
