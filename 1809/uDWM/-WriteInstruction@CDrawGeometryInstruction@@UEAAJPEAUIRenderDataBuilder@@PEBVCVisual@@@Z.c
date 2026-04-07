/*
 * XREFs of ?WriteInstruction@CDrawGeometryInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180038B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawGeometryInstruction::WriteInstruction(
        CDrawGeometryInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _QWORD, _QWORD))(*(_QWORD *)a2 + 32LL))(
           a2,
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *(unsigned int *)(*((_QWORD *)this + 3) + 24LL));
}
