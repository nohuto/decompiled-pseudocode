/*
 * XREFs of CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___ @ 0x180013D24
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x180013540 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z @ 0x180023020 (-IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

__int64 __fastcall CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___(
        _QWORD *a1,
        struct IUnknown *a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rdi
  int v7; // edx
  __int64 v8; // r9
  __int64 v9; // r8
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  unsigned __int64 i; // rdi
  __int64 v14; // r9
  __int64 v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt

  *a3 = 0LL;
  v4 = 0LL;
  v7 = -2147023728;
  do
  {
    if ( v4 >= a1[18] )
      break;
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1[17] + 8 * v4), a2) )
    {
      v8 = a1[17];
      v7 = 0;
      v9 = *(_QWORD *)(v8 + 8 * v4);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 72);
        while ( v10 >= 0 )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 72), v10 + 1, v10);
          if ( v11 == v10 )
            goto LABEL_8;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v10 + 16));
      }
LABEL_8:
      *a3 = *(_QWORD *)(v8 + 8 * v4);
    }
    else
    {
      v7 = -2147023728;
    }
    ++v4;
  }
  while ( v7 < 0 );
  for ( i = 0LL; v7 < 0 && i < a1[14]; ++i )
  {
    if ( CApplicationFrameWrapper::IsEqualByProxy(
           (CApplicationFrameWrapper *)(*(_QWORD *)(a1[13] + 8 * i) + 8LL),
           (struct IApplicationFrameProxy *)a2) )
    {
      v14 = a1[13];
      v7 = 0;
      v15 = *(_QWORD *)(v14 + 8 * i);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 72);
        while ( v16 >= 0 )
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), v16 + 1, v16);
          if ( v17 == v16 )
            goto LABEL_23;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v16 + 16));
      }
LABEL_23:
      *a3 = *(_QWORD *)(v14 + 8 * i);
    }
    else
    {
      v7 = -2147023728;
    }
  }
  return (unsigned int)v7;
}
