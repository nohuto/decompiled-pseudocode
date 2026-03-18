/*
 * XREFs of ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F4C6C
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1801F4360 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     GetIndividualScales @ 0x1801F3CD8 (GetIndividualScales.c)
 */

__int64 __fastcall CInteractionContextWrapper::UpdateMouseWheelParameters(__int64 a1)
{
  int IndividualScales; // ebx
  __int128 v3; // xmm0
  __int64 v4; // xmm1_8
  __int64 v5; // rcx
  signed int LastError; // eax
  int v8; // [rsp+28h] [rbp-29h] BYREF
  int v9; // [rsp+2Ch] [rbp-25h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-21h] BYREF
  __int128 v11; // [rsp+48h] [rbp-9h] BYREF
  __int64 v12; // [rsp+58h] [rbp+7h]

  IndividualScales = 0;
  if ( CCommonRegistryData::m_dwMousewheelScrollingMode != 1 )
  {
    if ( CCommonRegistryData::m_dwMousewheelScrollingMode )
    {
      if ( CCommonRegistryData::m_dwMousewheelScrollingMode == 2 )
        return 0LL;
    }
    else
    {
      v3 = *(_OWORD *)(a1 + 336);
      v8 = 1065353216;
      v4 = *(_QWORD *)(a1 + 352);
      v11 = v3;
      v9 = 1065353216;
      v12 = v4;
      IndividualScales = GetIndividualScales((__int64)&v11, (float *)&v8, (float *)&v9);
      if ( IndividualScales >= 0 )
      {
        v5 = *(_QWORD *)(a1 + 248);
        v10[0] = 0LL;
        v10[1] = 0LL;
        v11 = 0uLL;
        if ( (unsigned int)GetPointerDeviceRects(v5, v10, &v11) )
        {
          LastError = GetLastError();
          IndividualScales = LastError;
          if ( LastError > 0 )
            IndividualScales = (unsigned __int16)LastError | 0x80070000;
        }
      }
    }
  }
  if ( IndividualScales >= 0 )
  {
    IndividualScales = SetMouseWheelParameterInteractionContext(*(_QWORD *)(a1 + 24), 1LL);
    if ( IndividualScales >= 0 )
    {
      IndividualScales = SetMouseWheelParameterInteractionContext(*(_QWORD *)(a1 + 24), 2LL);
      if ( IndividualScales >= 0 )
      {
        IndividualScales = SetMouseWheelParameterInteractionContext(*(_QWORD *)(a1 + 24), 5LL);
        if ( IndividualScales >= 0 )
          return (unsigned int)SetMouseWheelParameterInteractionContext(*(_QWORD *)(a1 + 24), 6LL);
      }
    }
  }
  return (unsigned int)IndividualScales;
}
