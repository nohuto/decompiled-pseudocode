/*
 * XREFs of ?ReleaseOverride@FxObject@@UEAAKGPEAXJPEBD@Z @ 0x1C0033720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxObject::ReleaseOverride(
        FxObject *this,
        unsigned __int16 Offset,
        void *Tag,
        unsigned int Line,
        const char *File)
{
  return ((__int64 (__fastcall *)(FxObject *, void *, _QWORD, const char *))this->Release)(this, Tag, Line, File);
}
