/*
 * XREFs of ??_GJointDivider@@UEAAPEAXI@Z @ 0x1803C9B70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x18009CA20 (--1OWNERSHIP_CHANGE_INFO@@QEAA@XZ.c)
 */

JointDivider *__fastcall JointDivider::`scalar deleting destructor'(JointDivider *this, char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v4 )
    DeleteObject(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  *((_DWORD *)this + 9) = -1073741823;
  OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
