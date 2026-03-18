/*
 * XREFs of ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0185D80
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C01440DC (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     <none>
 */

char __fastcall InputConfig::GetPointerDeviceConfig(
        const struct RIMDEV *a1,
        const struct tagHID_POINTER_DEVICE_INFO *a2,
        struct CLockedInputSpace *a3,
        struct CLockedInputSpaceRegion *a4)
{
  char v4; // di
  __int64 v8; // rax
  CInputConfig *v9; // r13
  CInputConfig *v10; // rbx
  CInputConfig *i; // r15
  _QWORD **v12; // rbx
  _QWORD **v13; // rax
  _QWORD *j; // rdx
  _DWORD *v15; // rcx

  v4 = 0;
  if ( *((_DWORD *)a2 + 6) == 7 )
  {
    v4 = 1;
    v8 = *((_QWORD *)gpInputConfig + 3);
    *(_QWORD *)a3 = v8;
    *(_QWORD *)a4 = v8 + 24;
  }
  else
  {
    v9 = gpInputConfig;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    v10 = *(CInputConfig **)v9;
    for ( i = **(CInputConfig ***)v9; v10 != v9; i = *(CInputConfig **)i )
    {
      v12 = (_QWORD **)((char *)v10 + 16);
      if ( !v12 )
        break;
      if ( *((_DWORD *)v12 + 299) )
      {
        if ( *((_DWORD *)a1 + 334) )
        {
          if ( *((_DWORD *)a1 + 338) == 4 )
          {
            if ( ((_DWORD)v12[1] & 1) != 0 )
            {
              v13 = v12 + 76;
LABEL_26:
              *(_QWORD *)a3 = v12;
              v4 = 1;
              *(_QWORD *)a4 = v13;
              break;
            }
          }
          else
          {
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
            for ( j = v12[150]; ; j = (_QWORD *)*j )
            {
              v15 = 0LL;
              if ( j != v12 + 150 )
                v15 = j + 2;
              if ( !v15 )
                break;
              if ( (v15[4] & 2) != 0
                && v15[9] == *((_DWORD *)a1 + 467)
                && v15[10] == *((_DWORD *)a1 + 468)
                && v15[11] == *((_DWORD *)a1 + 470) )
              {
                *(_QWORD *)a3 = v12;
                v4 = 1;
                *(_QWORD *)a4 = v15;
                break;
              }
            }
            ExReleaseResourceLite(CInputConfig::slock);
            KeLeaveCriticalRegion();
            if ( v4 )
              break;
          }
        }
        else if ( ((_DWORD)v12[1] & 1) != 0 )
        {
          v13 = v12 + 3;
          goto LABEL_26;
        }
      }
      v10 = i;
    }
    ExReleaseResourceLite(CInputConfig::slock);
    KeLeaveCriticalRegion();
  }
  return v4;
}
