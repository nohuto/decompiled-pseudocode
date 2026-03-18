/*
 * XREFs of ?OnSourceObjectDeleted@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z @ 0x1C028CE80
 * Callers:
 *     ??1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ @ 0x1C028C478 (--1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::OnSourceObjectDeleted(
        struct DXGFASTMUTEX *const *this,
        struct DXGDISPLAYMANAGERSOURCEOBJECT *a2)
{
  DXGDISPLAYMANAGEROBJECT *v4; // rcx
  struct DXGDISPLAYMANAGERSOURCEOBJECT *v5; // rcx
  DXGDISPLAYMANAGEROBJECT *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( a2 )
  {
    v4 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 14);
    if ( v4 != (DXGDISPLAYMANAGEROBJECT *)(this + 14) )
    {
      v5 = (DXGDISPLAYMANAGEROBJECT *)((char *)v4 - 8);
      if ( v5 )
      {
        do
        {
          if ( v5 == a2 )
            break;
          v6 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)v5 + 1);
          v5 = (DXGDISPLAYMANAGEROBJECT *)((char *)v6 - 8);
          if ( v6 == (DXGDISPLAYMANAGEROBJECT *)(this + 14) )
            v5 = 0LL;
        }
        while ( v5 );
        if ( v5 )
        {
          v7 = (_QWORD *)((char *)a2 + 8);
          v8 = *((_QWORD *)a2 + 1);
          if ( *(struct DXGDISPLAYMANAGERSOURCEOBJECT **)(v8 + 8) != (struct DXGDISPLAYMANAGERSOURCEOBJECT *)((char *)a2 + 8)
            || (v9 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v9 != v7) )
          {
            __fastfail(3u);
          }
          *v9 = v8;
          *(_QWORD *)(v8 + 8) = v9;
          *v7 = 0LL;
          *((_QWORD *)a2 + 2) = 0LL;
          --*((_QWORD *)this + 16);
        }
      }
    }
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
}
