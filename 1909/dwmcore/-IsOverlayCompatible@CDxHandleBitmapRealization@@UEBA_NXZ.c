/*
 * XREFs of ?IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18001AAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::IsOverlayCompatible(CDxHandleBitmapRealization *this)
{
  bool result; // al

  result = (*((_DWORD *)this + 31) & 0x40) != 0;
  if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
    return 1;
  return result;
}
