/*
 * XREFs of ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C008D6F0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C008C040 (UmfdDispatchEscape.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C008D5E0 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00E8CD4 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C01350F8 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C014955C (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C013071C (-Create@UmfdTls@@CAPEAV1@XZ.c)
 */

struct UmfdTls *__fastcall UmfdTls::EnsureTls(__int64 a1, __int64 a2)
{
  struct UmfdTls *result; // rax
  struct UmfdTls *v3; // rbx

  result = (struct UmfdTls *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v3 = result;
  if ( result )
  {
    result = (struct UmfdTls *)*((_QWORD *)result + 44);
    if ( !result )
    {
      result = UmfdTls::Create();
      *((_QWORD *)v3 + 44) = result;
    }
  }
  return result;
}
