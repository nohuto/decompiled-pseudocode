/*
 * XREFs of ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x1802923B4
 * Callers:
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x18005DEF0 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall CreateRefCountedObj<LightweightPropertySet::LightweightProperty,>(__int64 *a1)
{
  _QWORD *v2; // rax

  v2 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v2[2] = 0LL;
    v2[1] = 0LL;
    *((_DWORD *)v2 + 4) = 0;
    *v2 = &CRefCountedObject<LightweightPropertySet::LightweightProperty>::`vftable';
    *((_DWORD *)v2 + 6) = 0;
  }
  else
  {
    v2 = 0LL;
  }
  *a1 = (__int64)v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  return a1;
}
