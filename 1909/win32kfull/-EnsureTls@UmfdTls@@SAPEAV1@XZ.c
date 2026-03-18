/*
 * XREFs of ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C01229E8
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C011A00C (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     UmfdDispatchEscape @ 0x1C0121D90 (UmfdDispatchEscape.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C012292C (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0142114 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C014BDCC (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C0116210 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 */

struct UmfdTls *__fastcall UmfdTls::EnsureTls(__int64 a1, __int64 a2, __int64 a3)
{
  struct UmfdTls *result; // rax
  struct UmfdTls *v4; // rbx

  result = (struct UmfdTls *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v4 = result;
  if ( result )
  {
    result = (struct UmfdTls *)*((_QWORD *)result + 44);
    if ( !result )
    {
      result = UmfdTls::Create();
      *((_QWORD *)v4 + 44) = result;
    }
  }
  return result;
}
