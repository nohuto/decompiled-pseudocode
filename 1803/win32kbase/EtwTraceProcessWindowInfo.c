/*
 * XREFs of EtwTraceProcessWindowInfo @ 0x1C005AE60
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1C00AB16C (-EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00AB2F4 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall EtwTraceProcessWindowInfo(__int64 a1)
{
  LONGLONG TimeQuadPart; // rax
  __int64 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // edi
  unsigned int ThreadInfoFlags; // eax
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]
  int v12; // [rsp+38h] [rbp-10h]
  LONGLONG v13; // [rsp+58h] [rbp+10h]

  if ( (W32kEtwEnabledKeyword & 0x4000000000LL) != 0
    && (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
    && (qword_1C019A1C0 & 0x4000000000LL) != 0
    && (qword_1C019A1C8 & 0x4000000000LL) == qword_1C019A1C8
    && (*(_DWORD *)(a1 + 480) & 0x1000000) != 0 )
  {
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(a1 + 416));
    v11 = 0;
    v13 = TimeQuadPart;
    v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v3 = *(__int64 **)(a1 + 416);
    LODWORD(TimeQuadPart) = *((_DWORD *)v3 + 14);
    v4 = *v3;
    v10 = TimeQuadPart;
    v9[0] = PsGetProcessStartKey(v4);
    v5 = *(_QWORD *)(a1 + 416);
    v9[1] = v13;
    v6 = *(_QWORD *)(v5 + 320);
    if ( v6 )
    {
      v7 = v11;
      do
      {
        ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)v6);
        v6 = *(_QWORD *)(v6 + 656);
        v7 |= ThreadInfoFlags;
      }
      while ( v6 );
      v11 = v7;
    }
    EtwTraceProcessWindowInfoSendUnique((const struct tagPROCESS_UIFLAG_MAP *)v9);
  }
}
