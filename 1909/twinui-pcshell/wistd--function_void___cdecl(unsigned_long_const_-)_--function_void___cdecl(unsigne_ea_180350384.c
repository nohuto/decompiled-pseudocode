/*
 * XREFs of wistd::function_void___cdecl(unsigned_long_const_&)_::function_void___cdecl(unsigned_long_const_&)___lambda_2a4c9b2a9d9b1659a969db6e2e1ef709__void_ @ 0x180350384
 * Callers:
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x180352C18 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall wistd::function_void___cdecl_unsigned_long_const____::function_void___cdecl_unsigned_long_const______lambda_2a4c9b2a9d9b1659a969db6e2e1ef709__void_(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v3; // rcx

  *(_QWORD *)(a1 + 112) = 0LL;
  v3 = (_QWORD *)(a1 + 8);
  *v3 = &off_18044ED48;
  v3[1] = 0LL;
  if ( v3 + 1 != a2 )
  {
    v3[1] = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)(a1 + 112) = v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return a1;
}
