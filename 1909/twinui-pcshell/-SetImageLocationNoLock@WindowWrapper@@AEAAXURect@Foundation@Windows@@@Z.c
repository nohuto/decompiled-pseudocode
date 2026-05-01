/*
 * XREFs of ?SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x18006804C
 * Callers:
 *     ?v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ @ 0x180067F80 (-v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ.c)
 *     ?SetImageLocation@WindowWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x180067FD0 (-SetImageLocation@WindowWrapper@@UEAAJURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ea27fc5d667820da3627d864690b6295___ @ 0x1800680F8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_ea27fc5d667820da3627d864690b6295.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall WindowWrapper::SetImageLocationNoLock(__int64 a1, float *a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  float *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 576)
    && (*(float *)(a1 + 724) != *a2
     || *(float *)(a1 + 728) != a2[1]
     || *(float *)(a1 + 732) != a2[2]
     || *(float *)(a1 + 736) != a2[3]) )
  {
    if ( *(_QWORD *)(a1 + 304) )
    {
      *(_QWORD *)v7 = a1;
      v8 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ea27fc5d667820da3627d864690b6295___(
             v5,
             CurrentThreadId,
             v7);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x18F,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v6,
          v7[0]);
        __debugbreak();
      }
    }
  }
  *(_OWORD *)(a1 + 708) = *(_OWORD *)a2;
}
