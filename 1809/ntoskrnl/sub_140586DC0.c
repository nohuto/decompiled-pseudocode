/*
 * XREFs of sub_140586DC0 @ 0x140586DC0
 * Callers:
 *     <none>
 * Callees:
 *     ExpHwidProcessDevice @ 0x140587158 (ExpHwidProcessDevice.c)
 */

__int64 __fastcall sub_140586DC0(__int64 a1, __int64 a2, _DWORD *a3)
{
  if ( a3[4] == 1295444332
    && a3[5] == *(_DWORD *)&GUID_DEVCLASS_MEDIA.Data2
    && a3[6] == *(_DWORD *)GUID_DEVCLASS_MEDIA.Data4
    && a3[7] == *(_DWORD *)&GUID_DEVCLASS_MEDIA.Data4[4] )
  {
    return ExpHwidProcessDevice(a3, &KSCATEGORY_AUDIO, a1);
  }
  else
  {
    return 0LL;
  }
}
