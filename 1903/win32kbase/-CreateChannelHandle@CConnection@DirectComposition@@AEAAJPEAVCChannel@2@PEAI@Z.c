/*
 * XREFs of ?CreateChannelHandle@CConnection@DirectComposition@@AEAAJPEAVCChannel@2@PEAI@Z @ 0x1C00564BC
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C00560BC (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C0013A2C (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::CreateChannelHandle(
        DirectComposition::CConnection *this,
        struct DirectComposition::CChannel *a2,
        unsigned int *a3)
{
  struct _ERESOURCE *v3; // rbx
  int inserted; // ebx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
               (DirectComposition::CConnection *)((char *)this + 24),
               a2,
               &v9);
  if ( inserted >= 0 )
    *a3 = v9;
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  return (unsigned int)inserted;
}
