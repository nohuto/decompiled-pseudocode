/*
 * XREFs of ??_G?$EventRegistration@UIObservableObjectArray@@UIObservableObjectArrayChanged@@@EventRegistrationHelpers@@UEAAPEAXI@Z @ 0x180355960
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 */

__int64 *__fastcall EventRegistrationHelpers::EventRegistration<IObservableObjectArray,IObservableObjectArrayChanged>::`scalar deleting destructor'(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 4);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
