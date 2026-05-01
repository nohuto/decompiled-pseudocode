/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UAGJPAPAUIWeakReference@@@Z @ 0x100109E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YGPAVWeakReferenceImpl@123@PAUIUnknown@@@Z @ 0x1001078D (-CreateWeakReference@Details@WRL@Microsoft@@YGPAVWeakReferenceImpl@123@PAUIUnknown@@@Z.c)
 */

int __stdcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::GetWeakReference(
        int a1,
        _DWORD *a2)
{
  signed __int32 v2; // ebx
  struct Microsoft::WRL::Details::WeakReferenceImpl *WeakReference; // eax
  _DWORD *v5; // esi
  unsigned int v6; // edx
  signed __int32 v7; // ebx
  signed __int32 v8; // ecx
  signed __int32 v9; // eax
  unsigned int v10; // [esp+8h] [ebp-Ch]
  volatile signed __int32 *v11; // [esp+Ch] [ebp-8h]
  signed __int32 v12; // [esp+10h] [ebp-4h]

  v11 = (volatile signed __int32 *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 16);
  *a2 = 0;
  v12 = v2;
  if ( v2 >= 0 )
  {
    WeakReference = Microsoft::WRL::Details::CreateWeakReference((void *)(a1 - 4));
    v5 = WeakReference;
    if ( WeakReference )
    {
      *((_DWORD *)WeakReference + 3) = v2;
      v6 = ((int)WeakReference >> 1) | 0x80000000;
      v10 = v6;
      v7 = _InterlockedCompareExchange(v11, v6, v2);
      if ( v7 == v12 )
      {
LABEL_8:
        *a2 = v5;
      }
      else
      {
        while ( v7 >= 0 )
        {
          v8 = v7;
          v5[3] = v7;
          v9 = _InterlockedCompareExchange(v11, v6, v7);
          v6 = v10;
          v7 = v9;
          if ( v9 == v8 )
            goto LABEL_8;
        }
        *v5 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
        v5[3] = -1073741823;
        v5[2] = -1073741823;
        operator delete(v5);
        _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 8));
        *a2 = 2 * v7;
      }
      return 0;
    }
    else
    {
      return -2147024882;
    }
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 8));
    *a2 = 2 * v2;
    return 0;
  }
}
