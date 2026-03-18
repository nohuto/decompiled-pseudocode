/*
 * XREFs of ?CaptureManipulationToCompositor@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_K@Z @ 0x1C016D120
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C016B058 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CaptureManipulationToCompositor(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4)
{
  char *v4; // rdi
  int v5; // ebx
  _OWORD *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-18h]

  v4 = (char *)this + 280;
  LODWORD(v8) = a3;
  v5 = 0;
  *((_QWORD *)&v8 + 1) = a4;
  if ( *((_DWORD *)this + 72) != *((_DWORD *)this + 73)
    || (v5 = CDynamicArray<InjectManipulationArgs *,2003858261>::Grow((__int64)this + 280), v5 >= 0) )
  {
    if ( *((_DWORD *)v4 + 2) >= *((_DWORD *)v4 + 3) )
      v5 = -1073741823;
    if ( v5 >= 0 )
    {
      v6 = Win32AllocPoolZInit(0x10uLL, 0x64734344u);
      if ( !v6 )
        v5 = -1073741801;
      if ( v5 >= 0 )
      {
        *v6 = v8;
        *(_QWORD *)(*(_QWORD *)v4 + 8LL * (unsigned int)(*((_DWORD *)v4 + 2))++) = v6;
      }
    }
  }
  return (unsigned int)v5;
}
