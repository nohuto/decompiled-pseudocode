/*
 * XREFs of ??4?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18012EAC4
 * Callers:
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x18004F4F0 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

LPVOID *__fastcall wistd::unique_ptr<_GUID [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
        LPVOID *a1,
        LPVOID *a2)
{
  void *v3; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    if ( v3 != *a1 )
    {
      CoTaskMemFree(*a1);
      *a1 = v3;
    }
  }
  return a1;
}
