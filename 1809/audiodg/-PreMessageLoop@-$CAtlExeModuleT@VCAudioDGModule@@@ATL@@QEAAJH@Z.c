/*
 * XREFs of ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140013B70
 * Callers:
 *     _lambda_d1de4b53b525fd4013d62472baaa2c14_::operator() @ 0x14001367C (_lambda_d1de4b53b525fd4013d62472baaa2c14_--operator().c)
 * Callees:
 *     ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x1400193B8 (-RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x140031A24 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop(__int64 a1, unsigned int a2, unsigned int a3)
{
  ATL::_ATL_OBJMAP_ENTRY30 **v3; // rdi
  unsigned __int64 v5; // rax
  HRESULT v6; // ebx
  __int64 *v8; // rdi
  HRESULT v9; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (ATL::_ATL_OBJMAP_ENTRY30 **)qword_1400890B0;
  v5 = qword_1400890B8;
  v6 = 1;
  while ( (unsigned __int64)v3 < v5 )
  {
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( *v3 )
    {
      v6 = ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject(*v3, a2, a3);
      v5 = qword_1400890B8;
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
        ATL::CHandle::Close((ATL::CHandle *)&v12);
      }
      else
      {
        v6 = CoResumeClassObjects();
      }
      if ( v6 < 0 )
      {
        v8 = (__int64 *)qword_1400890B0;
        v9 = 0;
        v10 = qword_1400890B8;
        while ( (unsigned __int64)v8 < v10 && !v9 )
        {
          v11 = *v8;
          if ( *v8 && *(_DWORD *)(v11 + 40) )
          {
            v9 = CoRevokeClassObject(*(_DWORD *)(v11 + 40));
            v10 = qword_1400890B8;
          }
          ++v8;
        }
      }
    }
  }
  return (unsigned int)v6;
}
