/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x18012F4AC
 * Callers:
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x180130730 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x18012F1E8 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, char a3, char a4, __int64 a5)
{
  int Instance; // ebx
  LPVOID *ppv; // [rsp+20h] [rbp-28h]
  LPVOID v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[1] = (LPVOID)-2LL;
  v12[0] = 0LL;
  a5 = 0LL;
  if ( (unsigned int)GetClassFromEndpointId(a1) == 3 )
  {
    Instance = 0;
  }
  else
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 v12);
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v12[0] + 40LL))(v12[0], a1, &a5);
      if ( Instance >= 0 )
        Instance = TrackSystemEffectBehavior(a5, a2, a3, a4, (__int64)ppv);
    }
  }
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  if ( v12[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return (unsigned int)Instance;
}
