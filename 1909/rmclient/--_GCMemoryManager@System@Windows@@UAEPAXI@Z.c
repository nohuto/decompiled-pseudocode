/*
 * XREFs of ??_GCMemoryManager@System@Windows@@UAEPAXI@Z @ 0x1000F000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ @ 0x100074B4 (-InternalRelease@-$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ.c)
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 */

Windows::System::CMemoryManager *__thiscall Windows::System::CMemoryManager::`scalar deleting destructor'(
        Windows::System::CMemoryManager *this,
        char a2)
{
  *((_DWORD *)this + 14) = -1073741823;
  Microsoft::WRL::ComPtr<IMarshal>::InternalRelease((int *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
