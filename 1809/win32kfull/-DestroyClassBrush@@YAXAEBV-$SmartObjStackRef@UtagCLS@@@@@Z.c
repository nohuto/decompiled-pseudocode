/*
 * XREFs of ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C010134C
 * Callers:
 *     DestroyClass @ 0x1C0022594 (DestroyClass.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall DestroyClassBrush(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v3; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v7; // r8
  __int64 *i; // rbx
  __int64 **v9; // rax
  __int64 j; // rbx
  __int64 **v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
  v12 = 0LL;
  v11 = (__int64 **)gSmartObjNullRef;
  v5 = *(_QWORD *)(ThreadWin32Thread + 1448);
  v12 = v5;
  *(_QWORD *)(ThreadWin32Thread + 1448) = &v12;
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) > 0x1FuLL )
  {
    v5 = 0LL;
    v7 = 4696LL;
    while ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) != *(_QWORD *)(v7 + gpsi) )
    {
      v5 = (unsigned int)(v5 + 1);
      v7 += 8LL;
      if ( (unsigned int)v5 >= 0x1F )
      {
        for ( i = *(__int64 **)(CurrentProcessWin32Process + 360); ; i = (__int64 *)**v11 )
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
          if ( *v11 != **(__int64 ***)a1 )
          {
            v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL);
            if ( *(_QWORD *)((*v11)[1] + 72) == v5 )
              return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v11, v5);
          }
        }
        for ( j = *(_QWORD *)(CurrentProcessWin32Process + 352); ; j = **v11 )
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
          if ( *v11 != **(__int64 ***)a1 )
          {
            v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL);
            if ( *(_QWORD *)((*v11)[1] + 72) == v5 )
              return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v11, v5);
          }
          v9 = v11;
        }
        GreDeleteObject(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL));
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v11, v5);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v11, v5);
}
