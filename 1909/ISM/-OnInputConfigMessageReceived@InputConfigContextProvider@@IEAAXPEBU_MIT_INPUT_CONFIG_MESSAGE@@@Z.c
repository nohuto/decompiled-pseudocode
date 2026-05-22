/*
 * XREFs of ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18001179C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT_CONFIG_MESSAGE_const___::_Do_call @ 0x18002A600 (std--_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT__ea_18002A600.c)
 * Callees:
 *     ?CopyConfig@InputConfigContextProvider@@IEAAJAEBUINPUT_SPACE_PAYLOAD@@PEAU2@@Z @ 0x1800118C8 (-CopyConfig@InputConfigContextProvider@@IEAAJAEBUINPUT_SPACE_PAYLOAD@@PEAU2@@Z.c)
 *     ?BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAUSystemContextMessage@@@Z @ 0x180011948 (-BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAUSystemContextMessage@@@Z.c)
 *     ??$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEBU2@@Z @ 0x180011998 (--$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UIN.c)
 *     ??$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXPEAUINPUT_SPACE_PAYLOAD@@0Uforward_iterator_tag@1@@Z @ 0x180011ACC (--$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SP.c)
 *     ?ClearConfigs@InputConfigContextProvider@@IEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x180011D18 (-ClearConfigs@InputConfigContextProvider@@IEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 */

void __fastcall InputConfigContextProvider::OnInputConfigMessageReceived(
        InputConfigContextProvider *this,
        const struct _MIT_INPUT_CONFIG_MESSAGE *a2)
{
  InputConfigContextProvider *v3; // rcx
  char *v4; // r8
  __int64 v5; // rcx
  bool v6; // zf
  __int64 v7; // xmm0_8
  __int64 v8; // rdx
  __int64 v9; // xmm1_8
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+2Ch] [rbp-34h]
  char *v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]

  v3 = (InputConfigContextProvider *)*(unsigned int *)a2;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      InputConfigContextProvider::ClearConfigs(v3, (char *)this + 248);
      if ( (char *)this + 248 != (char *)this + 224 )
        std::vector<INPUT_SPACE_PAYLOAD>::_Assign_range<INPUT_SPACE_PAYLOAD *>(
          (char *)this + 248,
          *((_QWORD *)this + 28),
          *((_QWORD *)this + 29));
      *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
      v4 = (char *)*((_QWORD *)this + 31);
      v5 = *((_QWORD *)this + 32) - (_QWORD)v4;
      v10 = 1LL;
      v12 = 0;
      v6 = v4 == *((char **)this + 32);
      v11 = (int)v5 / 24;
      if ( v6 )
        v4 = 0LL;
      v13 = v4;
      SystemContextProvider::BroadcastMessageToObservers(this, (struct SystemContextMessage *)&v10);
    }
  }
  else
  {
    v7 = *(_QWORD *)((char *)a2 + 4);
    v11 = *((_DWORD *)a2 + 3);
    v12 = *((_DWORD *)a2 + 4);
    v13 = (char *)a2 + 20;
    v10 = v7;
    if ( (int)InputConfigContextProvider::CopyConfig(
                v3,
                (const struct INPUT_SPACE_PAYLOAD *)&v10,
                (struct INPUT_SPACE_PAYLOAD *)&v14) >= 0 )
    {
      v8 = *((_QWORD *)this + 29);
      if ( *((_QWORD *)this + 30) == v8 )
      {
        std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD const &>((char *)this + 224, v8, &v14);
      }
      else
      {
        v9 = v15;
        *(_OWORD *)v8 = v14;
        *(_QWORD *)(v8 + 16) = v9;
        *((_QWORD *)this + 29) += 24LL;
      }
    }
  }
}
