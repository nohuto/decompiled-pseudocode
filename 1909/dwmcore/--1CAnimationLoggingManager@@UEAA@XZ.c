/*
 * XREFs of ??1CAnimationLoggingManager@@UEAA@XZ @ 0x18004B0A0
 * Callers:
 *     ??_GCAnimationLoggingManager@@UEAAPEAXI@Z @ 0x18004B060 (--_GCAnimationLoggingManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004CB8C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CAnimationLoggingManager::~CAnimationLoggingManager(CAnimationLoggingManager *this)
{
  __int64 v2; // rcx
  _QWORD **v3; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  std::wstring::_Tidy_deallocate((char *)this + 152);
  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 16) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  v3 = (_QWORD **)*((_QWORD *)this + 12);
  v4 = *v3;
  *v3 = v3;
  *(_QWORD *)(*((_QWORD *)this + 12) + 8LL) = *((_QWORD *)this + 12);
  v5 = (_QWORD *)*((_QWORD *)this + 12);
  *((_QWORD *)this + 13) = 0LL;
  if ( v4 != v5 )
  {
    do
    {
      v6 = (_QWORD *)*v4;
      std::wstring::_Tidy_deallocate(v4 + 4);
      std::_Deallocate<16,0>(v4, 72LL);
      v5 = (_QWORD *)*((_QWORD *)this + 12);
      v4 = v6;
    }
    while ( v6 != v5 );
  }
  std::_Deallocate<16,0>(v5, 72LL);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 56);
  CResource::~CResource(this);
}
