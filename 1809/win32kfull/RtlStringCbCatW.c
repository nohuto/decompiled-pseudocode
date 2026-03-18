/*
 * XREFs of RtlStringCbCatW @ 0x1C0125BA0
 * Callers:
 *     _RegisterDManipHook @ 0x1C0125A60 (_RegisterDManipHook.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0125C0C (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCbCatW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v4; // rdx
  NTSTRSAFE_PWSTR v5; // rax
  NTSTATUS result; // eax
  __int64 v7; // rcx
  size_t v8; // [rsp+20h] [rbp-18h]

  v4 = 130LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = 130 - v4;
  else
    v7 = 0LL;
  if ( v4 )
    return RtlStringCopyWorkerW(&pszDest[v7], 130 - v7, (size_t *)(130 - v7), L"\\System32\\directmanipulation.dll", v8);
  return result;
}
