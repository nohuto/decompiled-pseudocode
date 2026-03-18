/*
 * XREFs of ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C0093E1C
 * Callers:
 *     DestroyClass @ 0x1C0097F80 (DestroyClass.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall DestroyClassBrush(__int64 a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 *i; // rbx
  __int64 **v13; // rax
  __int64 j; // rbx
  __int64 **v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  v16 = 0LL;
  v15 = (__int64 **)gSmartObjNullRef;
  v10 = *(_QWORD *)(ThreadWin32Thread + 1472);
  v16 = v10;
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v16;
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) > 0x1FuLL )
  {
    v10 = 0LL;
    v8 = 4696LL;
    while ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) != *(_QWORD *)(v8 + gpsi) )
    {
      v10 = (unsigned int)(v10 + 1);
      v8 += 8LL;
      if ( (unsigned int)v10 >= 0x1F )
      {
        for ( i = *(__int64 **)(CurrentProcessWin32Process + 352); ; i = (__int64 *)**v15 )
        {
          if ( i != *v15 )
          {
            if ( v15 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v15 + 2) )
            {
              if ( *((_BYTE *)v15 + 12) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v15);
            }
            if ( i )
            {
              v15 = (__int64 **)i[16];
              ++*((_DWORD *)v15 + 2);
            }
            else
            {
              v15 = (__int64 **)gSmartObjNullRef;
            }
          }
          v13 = v15;
          if ( !*v15 )
            break;
          if ( *v15 != **(__int64 ***)a1 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL);
            if ( *(_QWORD *)((*v15)[1] + 72) == v10 )
              return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v15, v10, v8, v9);
          }
        }
        for ( j = *(_QWORD *)(CurrentProcessWin32Process + 344); ; j = **v15 )
        {
          if ( (__int64 *)j != *v13 )
          {
            if ( v15 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v15 + 2) )
            {
              if ( *((_BYTE *)v15 + 12) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v15);
            }
            if ( j )
            {
              v15 = *(__int64 ***)(j + 128);
              ++*((_DWORD *)v15 + 2);
            }
            else
            {
              v15 = (__int64 **)gSmartObjNullRef;
            }
          }
          if ( !*v15 )
            break;
          if ( *v15 != **(__int64 ***)a1 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL);
            if ( *(_QWORD *)((*v15)[1] + 72) == v10 )
              return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v15, v10, v8, v9);
          }
          v13 = v15;
        }
        GreDeleteObject(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL));
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v15, v10, v8, v9);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v15, v10, v8, v9);
}
