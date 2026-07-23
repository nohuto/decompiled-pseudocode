/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x180079E60
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x180079E20 (LdrQueryImageFileExecutionOptions.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800736F0 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x18007384C (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x180079F00 (RtlQueryImageFileKeyOption.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

__int64 __fastcall RtlQueryImageFileExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v7; // eax
  unsigned int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
    v7 = RtlpOpenImageFileOptionsKeyEx(a1, 9LL, 0, &Handle);
  else
    v7 = RtlpOpenBaseImageFileOptionsKey(&Handle);
  ImageFileKeyOption = v7;
  if ( v7 >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, a5, a6);
    if ( a1 )
      NtClose(Handle);
  }
  return ImageFileKeyOption;
}
