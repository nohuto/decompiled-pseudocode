/*
 * XREFs of CmpInitializePreloadedHives @ 0x1409C4A28
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140734770 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeSystemHive @ 0x1409C4B30 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x1409C4CAC (CmpInitializePreloadedHive.c)
 */

__int64 __fastcall CmpInitializePreloadedHives(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  ACL *v4; // rbp
  int v5; // eax
  __int64 **v6; // rax
  __int64 *v7; // rsi
  _QWORD **v8; // rax
  _QWORD *v9; // rcx
  __int64 **v11; // rax
  __int64 *v12; // rbx

  v2 = 0;
  if ( a2 )
  {
    v4 = CmpHiveRootSecurityDescriptor();
    if ( v4 )
    {
      if ( CmpBspMerge )
      {
        v11 = (__int64 **)(*(_QWORD *)(a1 + 240) + 272LL);
        v12 = *v11;
        while ( v12 != (__int64 *)v11 )
        {
          if ( (*((_DWORD *)v12 + 6) & 0x80u) != 0 )
            CmpInitializePreloadedHive(v12, v4);
          v12 = (__int64 *)*v12;
          v11 = (__int64 **)(*(_QWORD *)(a1 + 240) + 272LL);
        }
      }
      v5 = CmpInitializeSystemHive(a1, v4);
      v2 = v5;
      if ( v5 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0xCuLL, v5, 0LL);
      v6 = (__int64 **)(*(_QWORD *)(a1 + 240) + 272LL);
      v7 = *v6;
      while ( v7 != (__int64 *)v6 )
      {
        if ( !CmpBspMerge || (*((_DWORD *)v7 + 6) & 0x80u) == 0 )
          CmpInitializePreloadedHive(v7, v4);
        v7 = (__int64 *)*v7;
        v6 = (__int64 **)(*(_QWORD *)(a1 + 240) + 272LL);
      }
      ExFreePoolWithTag(v4, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    qword_140439288 = (__int64)&CmpPreloadedHivesList;
    CmpPreloadedHivesList = (__int64)&CmpPreloadedHivesList;
    v8 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 272LL);
    v9 = *v8;
    while ( v9 != v8 )
    {
      ++CmpPreloadedHivesCount;
      v9 = (_QWORD *)*v9;
      v8 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 272LL);
    }
  }
  return v2;
}
