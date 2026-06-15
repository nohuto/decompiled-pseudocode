/*
 * XREFs of ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x140040884
 * Callers:
 *     ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x140040C80 (-AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq @ 0x140041190 (McTemplateU0pqpqqqqqq.c)
 *     WPP_SF_PPPL @ 0x1400412E0 (WPP_SF_PPPL.c)
 */

__int64 __fastcall AERTCreateHeap()
{
  unsigned __int64 v0; // rdi
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  int v4; // ebp
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF

  v0 = gMinSize;
  v1 = gInitialSize;
  v2 = gMaxSize;
  v8 = 0LL;
  v4 = RtlCreateMemoryBlockLookaside(&v8, 0LL, gInitialSize, gMinSize, gMaxSize);
  v6 = v4 & 0xC0000000;
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    v6 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_PPPL(*((_QWORD *)WPP_GLOBAL_Control + 2), v3, v5, v1, v0, v2, v4);
    }
  }
  if ( (byte_140087281 & 4) != 0 )
    McTemplateU0pqpqqqqqq(v6, v3, v5, 3, v8, v1, v0, v2);
  return v8;
}
