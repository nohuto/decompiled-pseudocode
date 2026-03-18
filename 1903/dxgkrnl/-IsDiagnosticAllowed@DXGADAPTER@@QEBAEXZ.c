/*
 * XREFs of ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C01ED790
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02B2AEC (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C0032E94 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C0032ECC (-IsCurrentProcessAdmin@@YAEXZ.c)
 */

bool __fastcall DXGADAPTER::IsDiagnosticAllowed(DXGADAPTER *this, struct _LUID *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int CurrentProcessSessionId; // eax
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  DXGADAPTER::IsAddapterSessionized(this, a2, 0LL, &v6);
  if ( v6 == 0x100000000LL || IsCurrentProcessAdmin() )
    return 1;
  if ( v6 == 0x200000000LL )
    return IsCurrentConsoleSession(v3, v2);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3, v2);
  return CurrentProcessSessionId == (_DWORD)v6;
}
