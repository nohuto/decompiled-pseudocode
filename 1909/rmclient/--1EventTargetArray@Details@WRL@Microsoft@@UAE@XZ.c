/*
 * XREFs of ??1EventTargetArray@Details@WRL@Microsoft@@UAE@XZ @ 0x1000B780
 * Callers:
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UAEPAXI@Z @ 0x1000B750 (--_GEventTargetArray@Details@WRL@Microsoft@@UAEPAXI@Z.c)
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QAE@XZ @ 0x1000B7E4 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QAE@XZ.c)
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 */

void __thiscall Microsoft::WRL::Details::EventTargetArray::~EventTargetArray(
        Microsoft::WRL::Details::EventTargetArray *this)
{
  int v2; // eax
  void *v3; // ecx
  int v4; // edi
  int v5; // ebx
  void *v6; // [esp+4h] [ebp-4h]

  v2 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  if ( v2 )
  {
    v3 = (void *)(v2 - 4);
    v4 = *(_DWORD *)(v2 - 4);
    v6 = (void *)(v2 - 4);
    v5 = v2 + 4 * v4;
    if ( v4 )
    {
      do
      {
        v5 -= 4;
        Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>(v5);
        --v4;
      }
      while ( v4 );
      v3 = v6;
    }
    operator delete(v3);
  }
  operator delete(*((void **)this + 5));
  *((_DWORD *)this + 2) = -1073741823;
}
