/*
 * XREFs of ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C007DB28
 * Callers:
 *     UmfdDispatchEscape @ 0x1C007CF40 (UmfdDispatchEscape.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C007DA6C (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0080D54 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C013FB2C (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C014B01C (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C013C9F0 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 */

struct UmfdTls *__fastcall UmfdTls::EnsureTls(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct UmfdTls *result; // rax
  struct UmfdTls *v5; // rbx

  result = (struct UmfdTls *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v5 = result;
  if ( result )
  {
    result = (struct UmfdTls *)*((_QWORD *)result + 44);
    if ( !result )
    {
      result = UmfdTls::Create();
      *((_QWORD *)v5 + 44) = result;
    }
  }
  return result;
}
