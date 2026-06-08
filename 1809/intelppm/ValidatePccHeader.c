/*
 * XREFs of ValidatePccHeader @ 0x1C002BC3C
 * Callers:
 *     AcquirePccInterface @ 0x1C0020EF4 (AcquirePccInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ValidatePccHeader(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // r9
  char v3; // al
  unsigned int v4; // eax

  v1 = -1073741811;
  if ( *(_DWORD *)a1 != 609239875 )
  {
    v2 = 43;
LABEL_15:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v2,
      (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids);
    return v1;
  }
  if ( *(_WORD *)(a1 + 4) < 0x28u )
  {
    v2 = 44;
    goto LABEL_15;
  }
  v3 = *(_BYTE *)(a1 + 6);
  if ( (v3 || *(_BYTE *)(a1 + 7) < 6u) && (v3 != 1 || *(_BYTE *)(a1 + 7)) )
  {
    v2 = 45;
    goto LABEL_15;
  }
  v4 = *(_DWORD *)(a1 + 36);
  if ( v4 > *(_DWORD *)(a1 + 28) )
  {
    v2 = 46;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a1 + 32) > v4 )
  {
    v2 = 47;
    goto LABEL_15;
  }
  return 0;
}
