/*
 * XREFs of ?OnChanged@CRgnGeometry@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180068EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180068F08 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CRgnGeometry::OnChanged(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r9d
  __int64 v3; // r8
  int v4; // edx
  unsigned int v5; // r9d

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 136) >> 4;
  v3 = a1;
  *(_BYTE *)(a1 + 152) = 1;
  if ( v2 )
  {
    while ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(*(_QWORD *)(v3 + 144) + 16LL * v1) )
    {
      v1 = v4 + 1;
      if ( v1 >= v5 )
        return 1LL;
    }
    *(_BYTE *)(v3 + 152) = 0;
  }
  return 1LL;
}
