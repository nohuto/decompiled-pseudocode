/*
 * XREFs of IovBuildAsynchronousFsdRequest @ 0x140924AF0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     XdvIopBuildAsynchronousFsdRequest @ 0x14030AEE0 (XdvIopBuildAsynchronousFsdRequest.c)
 *     VfSetIoBuildRequest @ 0x1409316F0 (VfSetIoBuildRequest.c)
 */

__int64 __fastcall IovBuildAsynchronousFsdRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v6 = XdvIopBuildAsynchronousFsdRequest(
         a1,
         a2,
         a3,
         a4,
         a5,
         a6,
         retaddr,
         (__int64 (__fastcall *)(__int64, __int64, __int64))IopBuildAsynchronousFsdRequest);
  v7 = v6;
  if ( v6 )
    VfSetIoBuildRequest(v6);
  return v7;
}
