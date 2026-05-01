/*
 * XREFs of ??_E?$ExternalDragCallback@V_lambda_d6de005f52295972498d6004bc7f9486_@@@DragCallbackHelpers@@EEAAPEAXI@Z @ 0x18031EBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x18031ECC0 (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 */

void *__fastcall DragCallbackHelpers::ExternalDragCallback<_lambda_d6de005f52295972498d6004bc7f9486_>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  bool v2; // zf

  v2 = *((_BYTE *)Block + 16) == 0;
  *(_QWORD *)Block = off_1803F64E0;
  if ( !v2 )
  {
    *((_BYTE *)Block + 16) = 0;
    ElementDragData::CancelDrag(*((ElementDragData **)Block + 3));
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)Block + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)Block + 3);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
