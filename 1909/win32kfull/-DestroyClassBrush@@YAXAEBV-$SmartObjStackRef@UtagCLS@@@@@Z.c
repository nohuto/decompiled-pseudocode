/*
 * XREFs of ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C0034B44
 * Callers:
 *     DestroyClass @ 0x1C0038CB0 (DestroyClass.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall DestroyClassBrush(__int64 a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rsi
  __int64 ThreadWin32Thread; // rax
  unsigned int v6; // edx
  __int64 v7; // r8
  __int64 *i; // rbx
  __int64 **v9; // rax
  __int64 j; // rbx
  __int64 **v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v12 = 0LL;
  v11 = (__int64 **)gSmartObjNullRef;
  v12 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v12;
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) > 0x1FuLL )
  {
    v6 = 0;
    v7 = 4696LL;
    while ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) != *(_QWORD *)(v7 + gpsi) )
    {
      ++v6;
      v7 += 8LL;
      if ( v6 >= 0x1F )
      {
        for ( i = *(__int64 **)(CurrentProcessWin32Process + 352); ; i = (__int64 *)**v11 )
        {
          if ( i != *v11 )
          {
            if ( v11 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v11 + 2) )
            {
              if ( *((_BYTE *)v11 + 12) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v11);
            }
            if ( i )
            {
              v11 = (__int64 **)i[16];
              ++*((_DWORD *)v11 + 2);
            }
            else
            {
              v11 = (__int64 **)gSmartObjNullRef;
            }
          }
          v9 = v11;
          if ( !*v11 )
            break;
          if ( *v11 != **(__int64 ***)a1
            && *(_QWORD *)((*v11)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) )
          {
            return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v11);
          }
        }
        for ( j = *(_QWORD *)(CurrentProcessWin32Process + 344); ; j = **v11 )
        {
          if ( (__int64 *)j != *v9 )
          {
            if ( v11 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v11 + 2) )
            {
              if ( *((_BYTE *)v11 + 12) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v11);
            }
            if ( j )
            {
              v11 = *(__int64 ***)(j + 128);
              ++*((_DWORD *)v11 + 2);
            }
            else
            {
              v11 = (__int64 **)gSmartObjNullRef;
            }
          }
          if ( !*v11 )
            break;
          if ( *v11 != **(__int64 ***)a1
            && *(_QWORD *)((*v11)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) )
          {
            return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v11);
          }
          v9 = v11;
        }
        GreDeleteObject(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL));
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v11);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v11);
}
