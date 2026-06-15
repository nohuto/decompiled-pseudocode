/*
 * XREFs of ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14002B008
 * Callers:
 *     _lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_::operator() @ 0x140029DD8 (_lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_--operator().c)
 * Callees:
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x14002A474 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x14002B27C (-RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z.c)
 */

__int64 __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop(__int64 a1, unsigned int a2, unsigned int a3)
{
  ATL::_ATL_OBJMAP_ENTRY30 **v3; // rdi
  unsigned __int64 v5; // rax
  HRESULT v6; // ebx
  __int64 *v7; // rdi
  HRESULT v8; // eax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (ATL::_ATL_OBJMAP_ENTRY30 **)qword_1400860C0;
  v5 = qword_1400860C8;
  v6 = 1;
  while ( (unsigned __int64)v3 < v5 )
  {
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( *v3 )
    {
      v6 = ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject(*v3, a2, a3);
      v5 = qword_1400860C8;
    }
    ++v3;
  }
  if ( v6 >= 0 )
  {
    if ( v6 )
    {
      *(_BYTE *)(a1 + 96) = 0;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 96) )
      {
        v12 = -1LL;
        v6 = CoResumeClassObjects();
        if ( v6 < 0 )
        {
          SetEvent(*(HANDLE *)(a1 + 80));
          WaitForSingleObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2 * *(_DWORD *)(a1 + 88));
        }
        ATL::CHandle::Close((void **)&v12);
      }
      else
      {
        v6 = CoResumeClassObjects();
      }
      if ( v6 < 0 )
      {
        v7 = (__int64 *)qword_1400860C0;
        v8 = 0;
        v9 = qword_1400860C8;
        while ( (unsigned __int64)v7 < v9 && !v8 )
        {
          v10 = *v7;
          if ( *v7 && *(_DWORD *)(v10 + 40) )
          {
            v8 = CoRevokeClassObject(*(_DWORD *)(v10 + 40));
            v9 = qword_1400860C8;
          }
          ++v7;
        }
      }
    }
  }
  return (unsigned int)v6;
}
