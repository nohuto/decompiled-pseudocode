/*
 * XREFs of CreateSharedWriteDesktopTargetMarshaler @ 0x1C015F0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedWriteDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015EEFC (-Create@CSharedWriteDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEA.c)
 */

__int64 __fastcall CreateSharedWriteDesktopTargetMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedWriteDesktopTargetMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedWriteDesktopTargetMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  result = DirectComposition::CSharedWriteDesktopTargetMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
