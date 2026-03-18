/*
 * XREFs of ?DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C0056DB8
 * Callers:
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C01290D8 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01746F0 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEAUDisplayIDObj@@AEAPEAU_DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK@@@Z @ 0x1C0056E9C (-DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEAUDisplayIDObj@@AEAPEAU_DISPLAYID_PRODUCT_IDEN.c)
 *     ?IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ @ 0x1C00570FC (-IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_GetUserFriendlyName(
        struct DisplayIDObj *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  UCHAR *v9; // rdx
  unsigned __int8 v10; // bl
  unsigned __int16 *v11; // rsi
  __int64 v12; // rbp
  PUCHAR SourceCharacter; // [rsp+20h] [rbp-28h] BYREF
  struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v14; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 || !a4 )
    return 3221225485LL;
  *a4 = 0;
  v14 = 0LL;
  result = DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(a1, &v14);
  if ( (int)result >= 0 )
  {
    if ( DisplayID_ProductId_Parser::IsValidBlock((DisplayID_ProductId_Parser *)&v14) )
    {
      v8 = *(_BYTE *)(v7 + 14);
      if ( v8 )
        v9 = (UCHAR *)(v7 + 15);
      else
        v9 = 0LL;
      v10 = v8;
      SourceCharacter = v9;
      if ( v8 > 0xDu )
        v10 = 13;
      if ( v10 )
      {
        v11 = a2;
        v12 = v10;
        do
        {
          *v11++ = RtlAnsiCharToUnicodeChar(&SourceCharacter);
          --v12;
        }
        while ( v12 );
      }
      *a4 = v10;
      a2[v10] = 0;
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
