/*
 * XREFs of ?DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z @ 0x1C026C760
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C0274F20 (DpiPdoDispatchPnp.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall DpiBrightnessQueryInterface(_QWORD *Object, struct _QUERY_INTERFACE *a2)
{
  _WORD *v2; // rdi
  _WORD *v5; // rdx

  v2 = (_WORD *)Object[8];
  if ( RtlCompareMemory(a2->InterfaceType, &GUID_DEVINTERFACE_BRIGHTNESS_3, 0x10uLL) == 16
    && a2->Version == 3
    && a2->Size == 72 )
  {
    v5 = v2 + 2212;
  }
  else if ( RtlCompareMemory(a2->InterfaceType, &GUID_DEVINTERFACE_BRIGHTNESS_2, 0x10uLL) == 16
         && a2->Version == 2
         && a2->Size == 88 )
  {
    v5 = v2 + 2248;
  }
  else
  {
    if ( RtlCompareMemory(a2->InterfaceType, &GUID_DEVINTERFACE_BRIGHTNESS, 0x10uLL) != 16
      || a2->Version != 1
      || a2->Size != 56 )
    {
      return 3221226098LL;
    }
    v5 = v2 + 2292;
  }
  a2->InterfaceSpecificData = 0LL;
  if ( !*v5 )
    return 3221225659LL;
  memmove(a2->Interface, v5, (unsigned __int16)*v5);
  ObfReferenceObject(Object);
  return 0LL;
}
