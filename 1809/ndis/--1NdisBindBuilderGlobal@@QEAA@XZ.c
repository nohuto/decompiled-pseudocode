/*
 * XREFs of ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C0104C54
 * Callers:
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C01059DC (-ndisBindBuilderCleanup@@YAXXZ.c)
 * Callees:
 *     ??1ProtocolBindProperties@@QEAA@XZ @ 0x1C0081CE8 (--1ProtocolBindProperties@@QEAA@XZ.c)
 *     ??_GLwfBindProperties@@QEAAPEAXI@Z @ 0x1C0081D70 (--_GLwfBindProperties@@QEAAPEAXI@Z.c)
 *     ??1?$KStringAtomTableBase@$00@Rtl@@QEAA@XZ @ 0x1C0104ABC (--1-$KStringAtomTableBase@$00@Rtl@@QEAA@XZ.c)
 */

void __fastcall NdisBindBuilderGlobal::~NdisBindBuilderGlobal(NdisBindBuilderGlobal *this)
{
  void *v2; // rcx
  void *v3; // rcx
  int v4; // edi
  void *v5; // rcx
  int v6; // edi
  void *v7; // rcx
  int v8; // edi

  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x7272414Bu);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 15);
    if ( v4 )
    {
      do
        LwfBindProperties::`scalar deleting destructor'((LwfBindProperties *)(*((_QWORD *)this + 8)
                                                                            + ((unsigned __int64)(unsigned int)--v4 << 6)));
      while ( v4 );
      v3 = (void *)*((_QWORD *)this + 8);
    }
    ExFreePoolWithTag(v3, 0x7272414Bu);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    v6 = *((_DWORD *)this + 11);
    if ( v6 )
    {
      do
        LwfBindProperties::`scalar deleting destructor'((LwfBindProperties *)(*((_QWORD *)this + 6)
                                                                            + ((unsigned __int64)(unsigned int)--v6 << 6)));
      while ( v6 );
      v5 = (void *)*((_QWORD *)this + 6);
    }
    ExFreePoolWithTag(v5, 0x7272414Bu);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    v8 = *((_DWORD *)this + 7);
    if ( v8 )
    {
      do
        ProtocolBindProperties::~ProtocolBindProperties((ProtocolBindProperties *)(*((_QWORD *)this + 4)
                                                                                 + ((unsigned __int64)(unsigned int)--v8 << 6)));
      while ( v8 );
      v7 = (void *)*((_QWORD *)this + 4);
    }
    ExFreePoolWithTag(v7, 0x7272414Bu);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  Rtl::KStringAtomTableBase<1>::~KStringAtomTableBase<1>((__int64)this);
}
