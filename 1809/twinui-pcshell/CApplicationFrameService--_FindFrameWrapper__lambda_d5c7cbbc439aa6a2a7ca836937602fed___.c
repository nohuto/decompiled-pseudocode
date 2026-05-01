/*
 * XREFs of CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___ @ 0x18004A17C
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x1800478F0 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z @ 0x180036E60 (-IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___(
        _QWORD *a1,
        struct IUnknown *a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rdi
  signed int v7; // r10d
  int v8; // eax
  bool v9; // bp
  __int64 v10; // r11
  __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  unsigned __int64 i; // rdi
  __int64 v15; // r11
  __int64 v16; // rdx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt

  *a3 = 0LL;
  v4 = 0LL;
  v7 = -2147023728;
  do
  {
    if ( v4 >= a1[18] )
      break;
    v8 = SHIsSameObject(*(struct IUnknown **)(a1[17] + 8 * v4), a2);
    v9 = v8 != 0;
    v7 = v8 == 0 ? 0x80070490 : 0;
    if ( v8 )
    {
      v10 = a1[17];
      v11 = *(_QWORD *)(v10 + 8 * v4);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 72);
        while ( v12 >= 0 )
        {
          if ( (_DWORD)v12 != 0x7FFFFFFF )
          {
            v13 = v12;
            v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 72), v12 + 1, v12);
            if ( v13 != v12 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v12 + 16));
      }
LABEL_11:
      *a3 = *(_QWORD *)(v10 + 8 * v4);
    }
    ++v4;
  }
  while ( !v9 );
  for ( i = 0LL; v7 < 0 && i < a1[14]; ++i )
  {
    if ( CApplicationFrameWrapper::IsEqualByProxy(
           (CApplicationFrameWrapper *)(*(_QWORD *)(a1[13] + 8 * i) + 8LL),
           (struct IApplicationFrameProxy *)a2) )
    {
      v15 = a1[13];
      v7 = 0;
      v16 = *(_QWORD *)(v15 + 8 * i);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 72);
        while ( v17 >= 0 )
        {
          if ( (_DWORD)v17 != 0x7FFFFFFF )
          {
            v18 = v17;
            v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), v17 + 1, v17);
            if ( v18 != v17 )
              continue;
          }
          goto LABEL_23;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v17 + 16));
      }
LABEL_23:
      *a3 = *(_QWORD *)(v15 + 8 * i);
    }
    else
    {
      v7 = -2147023728;
    }
  }
  return (unsigned int)v7;
}
