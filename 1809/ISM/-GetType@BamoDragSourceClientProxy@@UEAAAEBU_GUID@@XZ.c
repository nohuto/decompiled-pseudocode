/*
 * XREFs of ?GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ @ 0x180013330
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

const struct _GUID *__fastcall BamoDragSourceClientProxy::GetType(BamoDragSourceClientProxy *this)
{
  __int64 v2; // rdi
  DWORD CurrentThreadId; // eax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL);
  CurrentThreadId = GetCurrentThreadId();
  if ( *(_DWORD *)(v2 + 136) != CurrentThreadId && *(_DWORD *)(v2 + 24) != CurrentThreadId )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x592,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v4);
    JUMPOUT(0x180013381LL);
  }
  return (const struct _GUID *)((char *)this + 40);
}
