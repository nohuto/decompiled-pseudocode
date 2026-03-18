/*
 * XREFs of ?DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEAUDisplayIDObj@@AEAPEAU_DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK@@@Z @ 0x1C0050488
 * Callers:
 *     ?DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z @ 0x1C0050164 (-DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C00501D8 (-DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C00502A0 (-DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0050318 (-DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C00503A4 (-DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(
        struct DisplayIDObj *a1,
        struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK **a2)
{
  unsigned __int8 v4; // r8
  __int64 v5; // rax
  struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v6; // rdx

  if ( !a1 || !*((_DWORD *)a1 + 5) )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v4 = *(_BYTE *)(*(_QWORD *)a1 + 1LL);
  v5 = *(_QWORD *)a1 + 4LL;
  v6 = (struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *)(v5 & -(__int64)(v4 != 0));
  if ( v4 < 3u || v4 < (unsigned int)*(unsigned __int8 *)((v5 & -(__int64)(v4 != 0)) + 2) + 3 || *(_BYTE *)v6 != 32 )
    return 3221225659LL;
  *a2 = v6;
  return 0LL;
}
