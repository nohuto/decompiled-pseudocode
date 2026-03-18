/*
 * XREFs of ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01E1CF8
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C01E19D8 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     _GetPointerDeviceType @ 0x1C01DAD88 (_GetPointerDeviceType.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01E159C (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01E187C (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01E1B50 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __fastcall Edgy::_StoreLastUpDataAndPost(Edgy *this, struct tagEDGY_DATA *a2, void *const a3)
{
  unsigned int v5; // ebp
  unsigned int v6; // esi
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const unsigned __int16 *v8; // rdx
  __int64 v9; // r8
  unsigned int *v10; // r9
  const struct tagPOINTER_INFO *v11; // rbx
  __int64 v12; // rdx
  BOOL IsLegacyDevice; // r15d
  int PointerDeviceType; // eax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+40h] [rbp-38h]
  _QWORD v18[3]; // [rsp+48h] [rbp-30h] BYREF

  if ( *((_DWORD *)this + 4) != 2 )
  {
    v5 = *((_DWORD *)a2 + 12);
    v6 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, a2, v6);
        v11 = PointerInfo;
        if ( PointerInfo )
        {
          if ( (*((_DWORD *)PointerInfo + 3) & 0x40000) != 0 )
          {
            IsLegacyDevice = Edgy::_IsLegacyDevice(*((Edgy **)PointerInfo + 2), v8, v9, v10);
            if ( !IsLegacyDevice || *(_DWORD *)v11 == 3 )
            {
              PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v11 + 2), v12);
              v15 = Edgy::_HitTestEdgyRegion(
                      v18,
                      (unsigned int *)this,
                      *((_QWORD *)v11 + 2),
                      *((_QWORD *)v11 + 5),
                      PointerDeviceType,
                      IsLegacyDevice);
              v16 = *v15;
              v17 = v15[2];
              if ( *v15 )
                break;
            }
          }
        }
        if ( ++v6 >= v5 )
          return;
      }
      *((_QWORD *)this + 30) = *((_QWORD *)v11 + 2);
      *((_DWORD *)this + 62) = *((_DWORD *)v11 + 16);
      *((_QWORD *)this + 32) = *((_QWORD *)v11 + 5);
      if ( (_DWORD)v17 == 1 )
        Edgy::_PostEdgyInertia(*(_QWORD *)(v16 + 8), 1LL, *((_DWORD *)this + 63));
    }
  }
}
