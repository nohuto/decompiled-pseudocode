/*
 * XREFs of ?CopyConfig@InputConfigContextProvider@@IEAAJAEBUINPUT_SPACE_PAYLOAD@@PEAU2@@Z @ 0x1800118C8
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18001179C (-OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 */

__int64 __fastcall InputConfigContextProvider::CopyConfig(
        InputConfigContextProvider *this,
        const struct INPUT_SPACE_PAYLOAD *a2,
        struct INPUT_SPACE_PAYLOAD *a3)
{
  __int64 v5; // xmm1_8
  void *v6; // rax

  v5 = *((_QWORD *)a2 + 2);
  *(_OWORD *)a3 = *(_OWORD *)a2;
  *((_QWORD *)a3 + 2) = v5;
  if ( !*((_DWORD *)a3 + 3) )
    return 0LL;
  v6 = operator new[](saturated_mul(*((unsigned int *)a3 + 3), 0x54uLL));
  *((_QWORD *)a3 + 2) = v6;
  if ( v6 )
  {
    memcpy_0(v6, *((const void **)a2 + 2), 84LL * *((unsigned int *)a3 + 3));
    return 0LL;
  }
  return 2147942414LL;
}
